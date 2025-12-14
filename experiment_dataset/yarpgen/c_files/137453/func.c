/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137453
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) - ((+(var_3)))));
        var_14 *= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_15 = ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))))))) < (arr_2 [i_0]));
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1]);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [i_3])))), (((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) arr_9 [i_1] [(unsigned char)8] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) | (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((7891837474615926378ULL) & (((/* implicit */unsigned long long int) 2147483643)))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)77)))))))));
                        var_18 = ((/* implicit */long long int) min((max((arr_13 [i_2 - 1] [i_4 - 3] [i_4 - 3]), (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_4 - 2])))), (((/* implicit */unsigned long long int) -2147483644))));
                        arr_16 [i_3] [i_3] [i_2] [i_1] = ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((arr_2 [i_2 + 1]) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_4] [i_2])))))))));
                        var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 3] [i_3])) ? (((/* implicit */int) (short)-4511)) : (2147483643)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10243358941531247902ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))) : (((arr_11 [i_2] [i_2]) << (((((/* implicit */int) arr_12 [i_1] [i_1])) - (88)))))))), (arr_10 [i_1] [i_2 + 1])));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */int) (-(((((((/* implicit */_Bool) (short)27501)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [(_Bool)1] [i_3]))) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [(unsigned short)9] [i_5])))))));
                            arr_19 [i_1] [18] [9U] [i_4 - 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7))))))) ? (min((min((arr_2 [i_1]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned char)240)), ((+(-6180283122196219767LL))))), (((/* implicit */long long int) var_6))));
    var_22 &= ((/* implicit */short) var_1);
    var_23 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))))));
}
