/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177853
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
    var_14 = ((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */int) (short)10821)) | (((/* implicit */int) (signed char)113)))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [11LL]))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)232))))))) : ((~(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) 1127549702))))))));
                    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5915733035612971124ULL)) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19397))) : (12531011038096580512ULL))))), (((((/* implicit */_Bool) ((((arr_6 [i_2] [i_1]) + (9223372036854775807LL))) >> (((arr_5 [7]) - (16276417096502359724ULL)))))) ? ((-(5915733035612971117ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28609)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))))))));
                    var_16 -= ((/* implicit */unsigned short) (((((_Bool)1) ? ((~(12531011038096580488ULL))) : (((/* implicit */unsigned long long int) ((arr_6 [i_1] [14U]) % (((/* implicit */long long int) (-2147483647 - 1)))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+(arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_4] [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((((/* implicit */int) arr_0 [(_Bool)1])) + (2147483647))) >> (((arr_2 [10U]) - (2555911515U))))), (((((((/* implicit */int) arr_8 [(signed char)4])) + (2147483647))) >> (((arr_4 [i_3] [(_Bool)1]) - (4331323684166804343LL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47108)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6))))) ? (((7350580477450820642ULL) >> (((((/* implicit */int) (signed char)-45)) + (51))))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [(unsigned short)20])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (-1127549702)))) : (((((/* implicit */_Bool) -1127549703)) ? (12531011038096580500ULL) : (((/* implicit */unsigned long long int) -1127549671))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_11 [i_6] [(unsigned char)7] [i_6])) : (((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */int) (_Bool)1)) % (1127549702)))));
                                var_18 = ((/* implicit */unsigned short) (short)-27763);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-((-(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [12U] [i_4] [i_6] [i_7]))) + (arr_6 [i_3] [i_5]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)13)), ((unsigned short)16299))))))))))));
                var_21 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_28 [i_8])), (12956519783986648387ULL))) < (((((/* implicit */_Bool) arr_28 [i_9])) ? (2561271934872670158ULL) : (((/* implicit */unsigned long long int) arr_28 [i_8]))))));
                arr_29 [i_8] &= ((/* implicit */_Bool) ((-1127549700) & (((/* implicit */int) (short)-6844))));
                var_22 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_5 [12ULL]) / (((/* implicit */unsigned long long int) arr_2 [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63575))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9184))) : (2669462464600178830ULL))))) >> (((((((/* implicit */unsigned long long int) ((1744489488U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))) - ((-(arr_5 [i_8]))))) - (16276417098246849325ULL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_3))));
}
