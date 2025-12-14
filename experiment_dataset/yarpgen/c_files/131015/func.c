/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131015
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((arr_0 [i_0]) / (((/* implicit */long long int) arr_4 [i_1 + 1] [i_0 - 1])))) : (((((/* implicit */_Bool) (short)30036)) ? (min((((/* implicit */long long int) (short)-10430)), (-7255882536450575223LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5906)))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_10))));
                var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) max((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) 4294967286U))))) ? (((int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) (short)-15449)))))))));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (short)-8)) : (min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)61)), ((unsigned short)0))))))));
                var_16 = (!(((/* implicit */_Bool) var_6)));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_5 [i_0] [i_1])) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((signed char) arr_9 [i_3] [(unsigned short)18]))) : ((+(((/* implicit */int) var_1)))))) > (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) >= (((/* implicit */unsigned long long int) -1)))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14001750556529027865ULL)) ? (((/* implicit */int) (short)-5359)) : (((/* implicit */int) (short)-27181))))), (min((9082927424174004708ULL), (9082927424174004688ULL))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0 + 2]));
                    var_20 = ((/* implicit */unsigned char) (short)-31496);
                }
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)5370))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [(unsigned short)2]))))), (arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))))));
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0 + 2] [i_1]))));
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_5]))));
            }
            var_24 = ((/* implicit */unsigned long long int) (short)9072);
        }
        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_6] [i_6 + 4])) - (((unsigned long long int) arr_8 [18] [18] [18]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)139))))) < ((+(arr_16 [i_6 + 4] [i_0] [(short)9] [i_0])))))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((unsigned short) arr_3 [i_0] [(signed char)0])))));
            var_27 = ((/* implicit */_Bool) arr_15 [i_6] [i_0] [i_6]);
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((_Bool) arr_1 [(short)1] [2ULL])) ? ((~(arr_0 [i_0 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))))));
    }
    var_29 = ((/* implicit */_Bool) var_2);
}
