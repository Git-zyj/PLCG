/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161039
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
    var_17 |= ((/* implicit */short) (unsigned short)35397);
    var_18 = ((/* implicit */int) ((signed char) 1529151461));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min((-951462861), (((/* implicit */int) (signed char)91))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((~(arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_2 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((7288823051595816244ULL), (7288823051595816244ULL)))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)0)), (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 1]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-30910))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_3 [i_1]), (((/* implicit */short) arr_1 [i_0] [i_0])))), (((/* implicit */short) arr_4 [i_1 - 1] [i_1 - 1])))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned char)80)), (var_16)))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_2])) ? (((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 1])) : (((/* implicit */int) var_5))));
            var_22 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (3906642886U) : (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 1] [(unsigned char)24]))));
        }
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_23 = ((/* implicit */int) arr_6 [i_3] [i_0] [i_0]);
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (7288823051595816233ULL)));
        }
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_24 |= ((/* implicit */int) (_Bool)1);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_5]);
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_4]))));
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)8]))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)106)) ? (3330500563U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5003)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 3; i_7 < 22; i_7 += 2) 
                {
                    var_29 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)32624)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned char)97)))));
                    arr_25 [(signed char)1] [(signed char)1] [(signed char)1] [i_0] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4983)) ? (arr_24 [i_6] [i_4] [i_7] [i_7] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3203255491U)) ? (((/* implicit */int) arr_21 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) var_2)))))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_7 + 1])) ? (((/* implicit */int) arr_17 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2])) : (((/* implicit */int) arr_4 [i_4] [i_7 - 2]))));
                }
                var_31 = ((short) arr_23 [i_0] [i_0] [i_0] [i_0]);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [19] [i_6])) ? (((((/* implicit */_Bool) 1341130268U)) ? (((/* implicit */int) (short)6856)) : (((/* implicit */int) (unsigned char)255)))) : (1144840158)));
            }
        }
    }
}
