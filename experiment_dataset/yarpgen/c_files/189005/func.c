/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189005
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_17 += ((/* implicit */unsigned char) ((short) arr_1 [i_0 + 1]));
        arr_2 [i_0] = arr_0 [i_0];
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_0]), ((unsigned char)167)))) + (((/* implicit */int) ((14633126740322573777ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))))))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned char) min((64LL), (((/* implicit */long long int) (unsigned short)4092))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_6 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned char) (-(max((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1])))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((/* implicit */int) (unsigned char)70)) & (((((/* implicit */int) arr_6 [(short)4])) << (((((/* implicit */int) (unsigned char)84)) - (73))))))), (((((/* implicit */_Bool) min((arr_5 [i_1]), ((unsigned char)245)))) ? (((/* implicit */int) max(((short)(-32767 - 1)), ((short)-16201)))) : (((/* implicit */int) (unsigned char)73)))))))));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (10U) : (16646144U))), (((/* implicit */unsigned int) arr_4 [i_2]))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((arr_6 [i_4]), ((unsigned short)65535))))));
                            arr_25 [i_2] [i_6 - 1] = ((/* implicit */signed char) 477740634);
                        }
                        var_21 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) (signed char)-64)) | (arr_18 [i_5] [i_3] [i_3] [i_2]))) / (((/* implicit */int) arr_20 [i_5] [i_5] [i_4] [i_5]))))));
                        arr_26 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = (((+(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_2])) < (-492590911)))))) * (((/* implicit */int) var_15)));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            arr_29 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] = ((/* implicit */int) var_2);
                            var_22 = ((/* implicit */_Bool) -1202550573);
                            arr_30 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)32753)) << (((((/* implicit */int) (unsigned char)85)) - (83))))), (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1]))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            arr_33 [i_2 + 1] [i_8] [i_2 + 1] [i_5] [i_2] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) min(((-2147483647 - 1)), (((/* implicit */int) (short)(-32767 - 1)))));
                            arr_34 [i_2] [i_2] [i_5] [i_2] [i_2] = (!(((/* implicit */_Bool) (+((-2147483647 - 1))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) var_5);
                            arr_37 [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) (signed char)-103)) <= (((/* implicit */int) (unsigned short)0))));
                        }
                        for (short i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                        {
                            arr_40 [i_3] [i_4] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 533536938036363333ULL))));
                            arr_41 [i_2] [i_3] [i_4] [i_3] [i_5] [i_10] = 2147483647;
                            arr_42 [i_3] [i_2] [i_3] = ((/* implicit */int) var_8);
                            var_24 &= (!(((/* implicit */_Bool) arr_24 [i_2] [i_3] [i_4] [i_4] [i_2] [i_3] [i_3])));
                        }
                        for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                        {
                            arr_46 [i_2] [i_2] [i_2] [i_5] [i_11] = ((/* implicit */unsigned long long int) 4294967295U);
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)4095)) != (66846720))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((arr_13 [i_11] [i_3] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3675515605125868713ULL))))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2566720448U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_9 [i_4]))))) * (min((min((var_8), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))))))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */int) (unsigned char)244)) ^ (((/* implicit */int) (unsigned short)13450)))) > ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)43)), ((short)-1)))))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 4) 
            {
                for (unsigned short i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned short) (-(min((var_5), (((/* implicit */unsigned int) (unsigned char)105))))));
                        var_29 -= ((/* implicit */short) (unsigned char)7);
                        arr_54 [i_2] [i_12 - 1] [i_13] [i_13] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) 1728246848U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_2 + 1])))))));
                        arr_55 [(_Bool)1] [i_12] [i_13] [i_13] |= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)181)) ^ (((/* implicit */int) arr_32 [i_2] [i_12 - 1] [i_14 - 2] [i_14 + 2] [i_13] [i_13] [(unsigned short)0])))));
                        arr_56 [i_2] [i_2] [i_13 - 1] [i_14] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned short) arr_14 [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        arr_57 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_5);
    }
    var_30 = ((/* implicit */unsigned short) var_13);
    var_31 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 368523960U))));
    var_32 = ((/* implicit */int) min(((unsigned char)0), ((unsigned char)209)));
    var_33 = ((/* implicit */unsigned long long int) var_13);
}
