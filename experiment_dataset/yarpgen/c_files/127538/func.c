/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127538
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_6)))))) : (34358689792ULL))))));
    var_12 = ((/* implicit */signed char) ((_Bool) (+((+(((/* implicit */int) (unsigned short)63352)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) (~(17592186044415ULL)))) ? (((/* implicit */unsigned long long int) var_9)) : ((+(((17592186044405ULL) | (17592186044415ULL))))));
                arr_5 [i_0] [7U] [i_1] = ((/* implicit */int) max((((/* implicit */short) ((_Bool) (unsigned short)40005))), (min((((/* implicit */short) (signed char)46)), (max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1]))))))))) < (max((var_9), (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~((+(var_1)))));
                                arr_13 [(_Bool)0] [i_0] [12U] [12LL] [2LL] [12ULL] [3] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_7)), (var_6))) - (((/* implicit */int) ((((/* implicit */_Bool) 18446726481523507186ULL)) && ((!(((/* implicit */_Bool) 18446726481523507201ULL)))))))));
                                var_16 = ((/* implicit */signed char) arr_3 [7] [(_Bool)1] [i_0]);
                                arr_14 [i_0] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    arr_24 [11LL] = ((/* implicit */long long int) ((18446726481523507176ULL) | (18446744073709551604ULL)));
                    arr_25 [(_Bool)1] [i_6] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (!(var_3))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (int i_9 = 4; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (3458764513820540928LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)91))))))));
                                arr_31 [i_8] [i_8] [13U] [i_6] [i_8] = var_6;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7 + 1] [i_7] [2ULL] [i_7] [16LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 2362774277U)) : (var_8)))) : (((((/* implicit */_Bool) var_0)) ? (17592186044414ULL) : (((/* implicit */unsigned long long int) arr_29 [12U] [i_6] [i_6] [i_7] [i_6]))))));
                }
                arr_32 [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) + (max((((/* implicit */unsigned long long int) (unsigned char)173)), (var_1)))));
                arr_33 [0ULL] [(_Bool)1] [15LL] = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (18446726481523507200ULL) : (((/* implicit */unsigned long long int) 1160994885U))))) ? (max((var_5), (((/* implicit */long long int) (signed char)64)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179)))))) ? (17592186044430ULL) : (((/* implicit */unsigned long long int) -3458764513820540928LL))));
}
