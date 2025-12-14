/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142333
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
    var_16 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) arr_1 [i_0])), (min((((/* implicit */int) (short)23657)), (-1)))))));
        arr_3 [i_0] = max((((max((((/* implicit */int) arr_2 [i_0])), (-17))) * (-9))), ((+((-(9))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max(((~(min((arr_0 [i_0]), (((/* implicit */int) (unsigned char)146)))))), (((/* implicit */int) arr_2 [(unsigned short)12]))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(1477330301))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 += ((/* implicit */signed char) ((unsigned short) max((arr_6 [i_1 - 1]), (arr_6 [i_1 - 1]))));
        arr_8 [i_1 - 1] = ((/* implicit */unsigned short) (+(1)));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_11 [(unsigned short)9] [i_1 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) -2))))), ((+(arr_0 [i_1 - 1])))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~((~(-1723111227))))))));
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)32231)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned short)64526)))) : (min((-1488257993), (1723111227))))), ((-(-1)))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) + (((((/* implicit */_Bool) ((unsigned char) arr_10 [i_1] [(signed char)13]))) ? (((((/* implicit */_Bool) 852965262186654774LL)) ? (852965262186654774LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (18446744073709551615ULL) : (16913723575885572860ULL))))))))));
                        var_24 = ((/* implicit */signed char) -1488258001);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_17 [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_5]), (arr_17 [i_1] [i_1 - 1] [i_5 + 1] [i_5])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [7U] [7U] [i_1 - 1] [i_5] [i_1])))))));
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_5 [i_1 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) -572778150))))))))));
                    }
                } 
            } 
        } 
    }
}
