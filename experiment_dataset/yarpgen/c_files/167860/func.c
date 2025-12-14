/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167860
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 |= ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (short)-10729)) ? (((/* implicit */unsigned long long int) -686552100)) : (arr_4 [(short)8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (13961352371381643704ULL)))))))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_12 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_2] [i_2 - 1] [i_0] [i_0])) > (272422872)))), ((-(((/* implicit */int) arr_11 [i_3 + 1] [11ULL] [i_2] [i_2 - 1] [i_4] [i_2]))))));
                            arr_13 [i_0] [(short)20] [i_4] [i_2] [i_3] [(short)20] &= ((/* implicit */short) arr_8 [i_0] [(short)16] [i_2] [i_2] [i_3 + 1] [(short)16]);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) 72057594037796864ULL)))))) / (((/* implicit */int) ((signed char) arr_4 [i_4]))))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */signed char) (-(arr_4 [(short)18])));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)-2200))));
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_1]));
                }
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_6] [i_0] = ((/* implicit */short) (((~(((7620771868804593095ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23197)) ? (((/* implicit */int) (unsigned short)2309)) : (((/* implicit */int) (short)-11123))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_6] [i_6])))))));
            var_24 -= ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (unsigned short)4096)))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_0])), (var_7))))))));
        }
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)13401))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        var_26 *= arr_11 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0] [(unsigned short)1];
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_27 += ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (unsigned short)2310))));
        var_28 = ((/* implicit */short) ((int) -2093724522));
        var_29 = ((/* implicit */short) min((var_29), (arr_17 [(signed char)1])));
        var_30 = ((/* implicit */unsigned short) ((11565599169867094704ULL) * (((((/* implicit */_Bool) arr_22 [(short)2])) ? (var_10) : (((/* implicit */unsigned long long int) var_3))))));
        arr_23 [i_7 - 1] = ((/* implicit */short) ((var_10) ^ (var_18)));
    }
    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(var_0))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_13))))))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709549568ULL)) ? (((/* implicit */int) (unsigned short)16418)) : (((/* implicit */int) (unsigned char)60))))) && (((/* implicit */_Bool) (short)248))));
}
