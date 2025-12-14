/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180437
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((int) arr_2 [i_1])), ((~(((/* implicit */int) arr_2 [i_1 + 1])))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_0))));
                            var_19 = ((/* implicit */long long int) ((9006085788153872321ULL) / (((/* implicit */unsigned long long int) var_10))));
                            var_20 = ((/* implicit */short) var_0);
                            var_21 = ((/* implicit */unsigned char) var_0);
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_7 [i_0 - 1]))))) == (((((/* implicit */int) var_15)) % (((/* implicit */int) arr_7 [i_0 - 1])))))))));
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((9006085788153872322ULL), (((/* implicit */unsigned long long int) (signed char)-59)))))));
                            var_24 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2] [i_5]))))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_6 [i_3 + 1] [i_0 + 1])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_1), ((short)-32456)))), (4294967275U)))))))));
                            var_26 -= arr_16 [i_5] [i_3 - 1] [i_3] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1];
                        }
                        var_27 = ((/* implicit */short) ((min((9006085788153872321ULL), (9440658285555679288ULL))) << (((9006085788153872310ULL) - (9006085788153872252ULL)))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) 9223372036854775807LL);
                        var_29 = ((/* implicit */signed char) min((((unsigned int) ((0LL) << (((((/* implicit */int) (signed char)-79)) + (124)))))), (((/* implicit */unsigned int) var_5))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */int) var_7)) | (arr_3 [i_1 + 1] [i_0 - 1])));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((arr_13 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_0 + 1]) > (((/* implicit */unsigned long long int) -347181031)))))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_1 - 1])) >> (((((/* implicit */int) var_15)) + (6573)))));
                    }
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) * (0LL))) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 18; i_8 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) var_3);
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_22 [i_1 - 1] [i_0]), (arr_22 [i_1 - 1] [i_1 - 1])))) > (((/* implicit */int) arr_22 [i_1 - 1] [i_0 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) 0LL);
    var_37 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < ((((+(((/* implicit */int) (unsigned char)0)))) >> (((((/* implicit */int) var_2)) - (4879)))))));
}
