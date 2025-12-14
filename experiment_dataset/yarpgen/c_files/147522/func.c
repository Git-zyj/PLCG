/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147522
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) var_5);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_12 = max((12723231745924436440ULL), (max((((/* implicit */unsigned long long int) (unsigned char)6)), (((((/* implicit */_Bool) 5723512327785115175ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) : (18446744073709551594ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((unsigned int) 17044474465319092605ULL))), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)18)))))) < (5723512327785115184ULL)));
                        arr_13 [i_2] [i_1] [i_1] [i_1] = max((((/* implicit */unsigned long long int) 4294967292U)), (min((max((((/* implicit */unsigned long long int) (unsigned char)199)), (17044474465319092619ULL))), (((/* implicit */unsigned long long int) 0)))));
                        var_13 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)18))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned long long int) arr_9 [(short)6] [i_1] [i_6]);
                                var_17 = ((/* implicit */unsigned char) 181661455U);
                                var_18 = ((/* implicit */unsigned int) (unsigned char)173);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)46))))))) ? ((+(((/* implicit */int) ((unsigned char) var_8))))) : (max((((/* implicit */int) (unsigned char)46)), (((((/* implicit */_Bool) 4588688808756873062ULL)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (unsigned int i_8 = 4; i_8 < 23; i_8 += 1) 
        {
            {
                var_20 = max((((((/* implicit */_Bool) arr_24 [i_8 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)39778))))) : (((unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)52681))))));
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)0))))))) : (min((min((arr_32 [i_7]), (12127070161864406064ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)199)) * (((/* implicit */int) (unsigned char)70)))))))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)3250), ((unsigned short)17))))) | (3837760180U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5723512327785115176ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_12] [i_12 + 1] [i_12 - 3] [i_12] [i_12]))) : (4277009474U))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)75))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)129)), (arr_25 [19U] [19U]))) : (arr_25 [i_12 - 3] [1ULL])))));
        var_24 = (-(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)199)) % (((/* implicit */int) var_8))))), (11U))));
        var_25 = ((/* implicit */unsigned char) 3523839890U);
    }
}
