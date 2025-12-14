/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179846
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
    var_19 += ((/* implicit */_Bool) -2LL);
    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (-8LL)))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294967290U)) <= (-8LL))))))) | (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((1671693263U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                                var_22 += ((/* implicit */signed char) min((-2LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (-129899812))))));
                                var_23 ^= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_5)), (2623274013U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned short)3)) * (((/* implicit */int) (unsigned short)35273)))) : (var_4))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2623274035U)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (_Bool)1))));
                    var_26 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                    arr_17 [i_0] [i_1] [19LL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (signed char)-66))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) var_4);
                        var_28 = 331307927;
                        arr_20 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_29 *= ((/* implicit */long long int) ((var_16) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                var_30 = ((/* implicit */unsigned short) 3936883796U);
            }
        } 
    } 
    var_31 -= ((/* implicit */signed char) (((~(((var_16) >> (((var_18) + (1741504054985359323LL))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), ((signed char)(-127 - 1))))))))));
    /* LoopNest 3 */
    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 20; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned char) 4697747551826810066ULL);
                                var_33 &= ((/* implicit */unsigned int) (~(14249488577514584717ULL)));
                                var_34 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17978))))), (3567211841U)));
                                var_35 = min((min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) 6090222361604579880LL)) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) (unsigned char)222))))), (2309048191U)))));
                            }
                        } 
                    } 
                    arr_36 [i_7] [(short)4] [i_7] [i_7 - 1] |= ((/* implicit */short) min((var_17), (((/* implicit */unsigned long long int) ((signed char) var_2)))));
                }
            } 
        } 
    } 
}
