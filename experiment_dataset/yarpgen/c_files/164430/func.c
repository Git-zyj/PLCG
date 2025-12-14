/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164430
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
    var_10 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-924), ((short)1065)))) || ((_Bool)1)))), (var_7)));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) 13647302072097214184ULL);
                            arr_19 [i_0] [i_4] [i_2 - 1] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) 871552651U)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))) << ((((~(((/* implicit */int) arr_16 [7U] [i_1] [i_1] [i_3] [i_4])))) - (6395)))));
                            arr_20 [i_4] [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (-(var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) arr_6 [i_6 + 2] [i_6] [i_2 + 1]);
                            var_11 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_6) : (var_4))));
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */short) ((13647302072097214184ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            }
            var_12 |= ((/* implicit */int) min((min((4799442001612337424ULL), (13647302072097214184ULL))), (((/* implicit */unsigned long long int) var_9))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((13647302072097214184ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [(short)5] [i_0] [(_Bool)1] [i_0]))))))) | (max((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) (_Bool)1)) + (-1)))))));
        arr_30 [i_0] [i_0] = ((/* implicit */int) var_8);
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_7] [i_7])) ? (((/* implicit */int) arr_33 [i_7] [i_7])) : (((/* implicit */int) (short)0))))));
        arr_35 [i_7] = ((/* implicit */unsigned int) (+(((int) max((((/* implicit */long long int) arr_1 [i_7] [i_7])), (arr_32 [i_7] [i_7]))))));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))))) > (((/* implicit */int) (_Bool)0))));
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (-5917286792980668505LL) : (((/* implicit */long long int) 28))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((min((-332851056), (((/* implicit */int) arr_1 [i_7] [7LL])))) != ((~(((/* implicit */int) (unsigned short)0)))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        arr_39 [i_8] = ((/* implicit */unsigned int) arr_32 [i_8] [i_8]);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_8])))))));
        arr_40 [(unsigned short)4] = ((/* implicit */unsigned long long int) var_8);
    }
}
