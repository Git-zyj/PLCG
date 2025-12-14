/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136401
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
    var_12 = ((/* implicit */signed char) var_8);
    var_13 = ((/* implicit */unsigned char) ((int) var_10));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [15] &= ((/* implicit */long long int) 657357230);
        var_14 &= ((/* implicit */int) arr_2 [i_0]);
        var_15 *= ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) 0ULL);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_4] [(unsigned char)2] [i_3] [i_4] [i_1 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))))))) : (((arr_0 [9] [i_4]) >> (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) -4122128911192553018LL)))))))));
                            var_18 = ((/* implicit */long long int) ((unsigned short) ((((10012910807660942574ULL) + (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10382612887015617814ULL)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) arr_14 [i_0] [i_1]);
                arr_15 [i_1] = ((/* implicit */unsigned int) max((max((var_1), (((/* implicit */unsigned long long int) ((unsigned int) 251160287))))), (((/* implicit */unsigned long long int) ((unsigned char) max((var_11), (251160291)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [1LL])) ? (-6770160991002792121LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [11U] [1ULL] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_5 - 3])) : (((/* implicit */int) var_4)))))))) ? (((((/* implicit */unsigned long long int) var_10)) ^ (arr_21 [i_1 - 1]))) : (var_5)));
                            arr_23 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_2] [18]))) - (0ULL))))), (((/* implicit */unsigned long long int) 140733193388032LL))));
                            arr_24 [4U] [4U] [i_1] [i_6] = ((/* implicit */int) ((min((arr_7 [5] [i_5 - 3] [i_6] [i_6]), (arr_7 [21U] [i_5 + 1] [5LL] [5LL]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_5 - 2] [i_5 - 2] [i_6])) : (((/* implicit */int) arr_7 [i_2] [i_5 + 1] [i_2] [i_6])))))));
                            var_21 = ((long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((251160287) - (251160276))))))));
                            arr_25 [14LL] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_0]))) > (arr_19 [i_0] [i_1])))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) <= (140733193388041LL))))))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))), (((unsigned long long int) 14725903952361154918ULL))))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((unsigned char) arr_0 [(unsigned char)13] [i_1 - 1]))))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 251160271)) : (arr_20 [i_7] [i_1] [i_1 - 1] [1LL] [i_0]))))) ? (((/* implicit */int) ((unsigned char) ((_Bool) 4144345175U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13ULL] [i_1] [i_7]))) < (150622120U))))));
            }
            var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_12 [2LL] [6] [i_0] [2LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4))))) : (max((arr_2 [i_0]), (arr_2 [i_1 - 1]))))) + (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */signed char) arr_1 [i_0])), (var_2)))))));
        }
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        arr_32 [(unsigned char)1] = ((/* implicit */unsigned int) ((long long int) var_10));
        var_25 = ((/* implicit */int) min((((long long int) ((unsigned short) var_5))), (((/* implicit */long long int) var_10))));
    }
    var_26 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)32762))))) ? (var_3) : (((/* implicit */long long int) ((1090227617U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))) == (((/* implicit */long long int) var_9))));
    var_27 = ((/* implicit */unsigned char) var_8);
}
