/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171456
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
    var_19 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) var_12);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) max((var_3), (min((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) var_18)), (var_7)))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) var_2)), (var_3))), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_1))))))), (max((min((((/* implicit */unsigned long long int) var_18)), (var_10))), (((/* implicit */unsigned long long int) min(((unsigned short)64018), (((/* implicit */unsigned short) (short)-4128))))))))))));
                        var_23 = ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 3; i_5 < 19; i_5 += 4) 
                        {
                            arr_16 [i_4 - 1] [i_4 - 1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_6)), (min((var_13), (var_14)))))), (max((min((var_8), (((/* implicit */unsigned long long int) var_6)))), (min((var_10), (var_17)))))));
                            arr_17 [(short)3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (max((min((((/* implicit */unsigned long long int) var_9)), (var_8))), (((/* implicit */unsigned long long int) var_14))))));
                            arr_18 [i_0] [i_0] [i_2 - 2] [i_5 + 1] = ((/* implicit */unsigned char) var_16);
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) var_13);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) min(((short)-7262), (var_18)))), (9218868437227405312ULL)))))));
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */int) var_6);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((var_3), (((/* implicit */unsigned long long int) var_2)))))));
                            arr_25 [(_Bool)1] [(signed char)18] = ((/* implicit */unsigned int) var_10);
                        }
                        for (int i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            arr_28 [i_0] = ((/* implicit */unsigned char) var_11);
                            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) min(((signed char)32), ((signed char)-124)))), (min(((unsigned char)254), (((/* implicit */unsigned char) (signed char)-78))))))), (max((min((var_3), (((/* implicit */unsigned long long int) var_16)))), (max((((/* implicit */unsigned long long int) var_0)), (var_10)))))));
                            var_28 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_2)), (var_5))), (min((119526917U), (((/* implicit */unsigned int) var_18))))))), (min((((/* implicit */unsigned long long int) var_6)), (max((var_7), (var_3)))))));
                        }
                        arr_29 [i_0] = ((/* implicit */short) min((var_8), (min((min((var_10), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_4))))));
                        arr_30 [i_2 + 3] [i_2 + 3] [20] [3ULL] [3ULL] = ((/* implicit */unsigned short) var_16);
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) var_1))))), (max((var_8), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min((119526910U), (((/* implicit */unsigned int) (_Bool)1))))))))));
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_35 [i_9] [i_9] = ((/* implicit */_Bool) min((min((min((var_10), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_5)))))), (max((min((var_10), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((2386069449U), (((/* implicit */unsigned int) (_Bool)1)))))))));
        arr_36 [i_9] = ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned long long int) min((min((var_9), (var_12))), (min((var_12), (var_0))))))));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) max((var_14), (var_13)))), (min((var_17), (((/* implicit */unsigned long long int) var_1)))))), (min((min((var_7), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_16)))))))))));
    }
    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
    {
        arr_39 [i_10] [i_10] = ((/* implicit */_Bool) min((1465214389), (((/* implicit */int) (_Bool)1))));
        arr_40 [i_10] [i_10] = ((/* implicit */short) var_6);
    }
    for (long long int i_11 = 2; i_11 < 21; i_11 += 4) 
    {
        arr_43 [i_11 + 1] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 4175440383U)), (var_8))), (((/* implicit */unsigned long long int) var_14))));
        arr_44 [i_11 - 1] = max((max((((/* implicit */unsigned long long int) var_2)), (min((var_8), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) var_4)));
    }
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_14))));
}
