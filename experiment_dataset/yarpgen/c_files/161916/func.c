/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161916
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 2])), (2719950695750357915ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15726793377959193701ULL)) ? (2613935902U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 4] [13] [18ULL])))))))) | (((/* implicit */unsigned long long int) (+((-(var_1))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) min((15726793377959193701ULL), (15726793377959193728ULL)));
                            var_13 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (unsigned short)65535)), (2719950695750357883ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (1039383959))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) arr_3 [19U] [i_1] [i_4]);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_15 -= ((/* implicit */unsigned short) (signed char)36);
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-633248362) : (((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            var_17 ^= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (2719950695750357893ULL)))) > ((~(((/* implicit */int) (unsigned short)43527)))));
                            var_18 ^= ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(unsigned short)1] [i_0 + 1] [i_0 + 3])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0 - 2] [6LL] [i_4] [i_5] [6LL] [i_4] [i_7]))))) : (9138721335121967382ULL));
                        }
                        arr_23 [i_4] [i_1] [i_4] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4] [i_4] [i_4]);
                    }
                    var_19 += ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), ((+(1517420229)))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min(((~(((/* implicit */int) (_Bool)1)))), (((var_1) % (var_3))))) : (min((((((/* implicit */_Bool) 9308022738587584227ULL)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        for (long long int i_12 = 4; i_12 < 9; i_12 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) min((((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) (_Bool)1))))) ? (arr_31 [i_10 - 1] [i_10 + 1] [i_11 - 1]) : (((/* implicit */long long int) arr_20 [19LL] [i_9])))), (((((/* implicit */_Bool) 4643698627551755628ULL)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12] [i_12] [i_12] [i_12 - 3] [i_12] [i_12 - 2]))) : (arr_31 [i_8] [i_11] [i_8]))) : (((/* implicit */long long int) (-(1436584769))))))));
                                arr_39 [i_12] [i_8] [i_8] [i_11] [i_8] [i_9] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_19 [i_12 - 2] [i_12] [i_12] [i_12] [i_11] [i_12 - 3] [i_11]), (var_4)))), (((long long int) (+(var_2))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_1))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_2 [i_12 - 1] [i_11]))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
}
