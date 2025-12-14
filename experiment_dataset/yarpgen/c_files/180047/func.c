/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180047
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
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_5))))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((max((var_8), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) var_16))))));
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0])))))) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4095)))))));
                var_21 = ((/* implicit */int) arr_6 [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))) + (((13563394831405654451ULL) / (3667611583691725474ULL))))) >> (((arr_6 [i_2] [i_2]) - (18267039452109162128ULL)))));
        var_23 *= ((/* implicit */_Bool) (signed char)(-127 - 1));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (max((arr_6 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_7 [(_Bool)1])))) : (arr_6 [i_2] [i_3])))) ? (((/* implicit */int) ((arr_5 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_2])))))));
            var_25 ^= ((/* implicit */unsigned long long int) arr_5 [i_3]);
            arr_12 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (var_13)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))))) + (arr_8 [i_3]))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned char) var_16);
                        var_27 = ((/* implicit */unsigned int) var_9);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (var_4)));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (unsigned char)24)) && (((((/* implicit */_Bool) (signed char)76)) || (((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))));
    }
    var_30 = ((/* implicit */signed char) var_15);
}
