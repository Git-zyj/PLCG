/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145487
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(var_4)))))) + (((unsigned long long int) (unsigned short)50736)))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) var_5));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_10))));
        var_18 = 1865275141U;
        arr_3 [i_0] = ((/* implicit */unsigned char) ((_Bool) 536870911LL));
        arr_4 [9] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((unsigned long long int) (short)-8620);
            var_19 *= ((/* implicit */unsigned short) ((min((arr_6 [i_1 - 1] [i_1 - 1]), (var_4))) ? (((((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1])) + (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])))) : ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (short)-8620))))));
        }
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8628))) + (9089132812825380888ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_2])) + (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1]))))))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_4] [i_3] [10ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_19 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3 + 2])) + (6237353062845829638ULL)));
                        var_21 += ((((/* implicit */unsigned long long int) arr_12 [i_2 + 1])) + (arr_5 [i_3 + 2] [i_2 - 1]));
                    }
                    var_22 = ((/* implicit */unsigned short) ((int) ((unsigned int) ((arr_0 [0LL]) ? (((/* implicit */int) arr_18 [i_0] [8] [i_3] [i_4])) : (((/* implicit */int) var_12))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((arr_12 [(unsigned short)1]), (((/* implicit */int) var_4)))) - (((/* implicit */int) (unsigned char)150)))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (unsigned char)13))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_25 += ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)97))))), (((var_13) ? (arr_19 [i_0] [i_0] [i_0] [i_7] [i_0]) : (arr_19 [i_0] [i_2] [i_2] [i_7] [i_3 + 2]))))));
                    var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) arr_24 [i_0] [i_2 - 1] [i_3] [i_3] [i_7] [i_7]))))));
                }
                var_27 -= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_11 [i_0] [i_2 - 1])) + (((/* implicit */int) arr_11 [i_0] [i_2 - 2]))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 0LL))))) ? (max((524287), (((/* implicit */int) arr_11 [i_2] [i_2])))) : ((~(((/* implicit */int) (_Bool)1))))))) + ((((~(arr_2 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_3 + 1] [5U] [i_2 - 2] [i_2 - 1])))))));
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)14802))));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (short)8620)))) : (((/* implicit */int) var_5))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)14811))))))));
            }
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
            {
                var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(17592186044415LL)))) ? ((-(((/* implicit */int) arr_11 [i_0] [i_0])))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)45))))));
                arr_30 [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_29 [i_0]))))));
            }
            for (signed char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)227)) + (((/* implicit */int) (unsigned char)127))))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23605))) - (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [5] [i_2 + 1] [i_2] [i_2])))))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_28 [i_10] [i_2] [(unsigned char)6] [(unsigned char)6]))) + (min((arr_28 [(unsigned char)12] [i_2] [i_10] [i_2]), (((/* implicit */unsigned long long int) (short)-8620)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_0] [i_0])), ((unsigned short)22400)))))))));
                arr_33 [i_0] [(signed char)3] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_1 [i_10]), (arr_22 [i_0] [i_0] [i_0] [i_2] [i_10]))))))) ? (((/* implicit */long long int) (((-(arr_23 [i_0] [1U] [i_0] [i_0] [(signed char)7] [i_0]))) + (arr_2 [10])))) : (((((/* implicit */long long int) (-(arr_2 [i_0])))) + (((long long int) (short)-8618))))));
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            var_35 = ((/* implicit */short) (~(max((arr_10 [i_11 - 1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))));
            var_36 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (short)27913)))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14803))) + ((-(arr_2 [9LL])))))) + (15911908804502643729ULL)));
            arr_38 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) (short)27913)), (arr_5 [i_11 + 2] [i_11])))))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((arr_9 [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_37 [(signed char)5] [9])))) : (((/* implicit */int) min(((unsigned char)140), ((unsigned char)162)))))) : ((-(((((/* implicit */int) (unsigned char)122)) + (((/* implicit */int) (signed char)27))))))));
        }
    }
    var_39 = ((/* implicit */long long int) var_0);
}
