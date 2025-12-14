/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131192
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_2))));
    var_17 = ((/* implicit */short) ((long long int) (_Bool)1));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(signed char)22] [i_0] |= ((/* implicit */signed char) ((4611677222334365696ULL) < (4611677222334365696ULL)));
                    var_18 = ((/* implicit */signed char) 4611677222334365696ULL);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_19 = 4611677222334365695ULL;
                                var_20 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)24)) : (-29)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)19)), (4611677222334365696ULL)));
                        arr_16 [i_5] [i_5 + 1] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) var_13);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((((-4845378604138789287LL) + (9223372036854775807LL))) >> ((((-(var_9))) + (4042547038699958953LL))))), (max((((long long int) 15347641557436465289ULL)), (((/* implicit */long long int) (unsigned char)200)))))))));
                        arr_19 [i_0 + 2] [(signed char)0] [(signed char)0] [i_1] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_14))) - (((/* implicit */int) max((((/* implicit */short) (unsigned char)80)), ((short)16316))))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_9)));
                        var_23 = ((/* implicit */int) 4294967283U);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 3; i_7 < 17; i_7 += 4) 
    {
        var_24 += ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) (signed char)-52)));
        arr_22 [i_7] = (!(((/* implicit */_Bool) 1596345790U)));
        var_25 = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) -8729341776426881089LL)) % (var_13))));
    }
    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) max(((+(var_6))), (((/* implicit */long long int) (signed char)-8))));
                    var_27 -= ((/* implicit */long long int) (_Bool)1);
                    var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                    {
                        for (signed char i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_6))) | ((~(((/* implicit */int) (_Bool)0))))));
                                arr_37 [i_8] [i_9] [i_9] [i_8] [5U] = ((/* implicit */long long int) ((var_12) < (((/* implicit */unsigned long long int) min((var_6), (var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) (signed char)64);
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min(((unsigned short)11992), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_38 [i_8] = ((/* implicit */unsigned short) var_0);
        var_32 += ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
    }
}
