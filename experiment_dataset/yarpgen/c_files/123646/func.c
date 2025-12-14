/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123646
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
    var_11 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)233))))) | (((unsigned int) var_8)))), (var_6)));
    var_12 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)88)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) 6920877129789297064LL))))) : (var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((short) (unsigned char)241)))));
        var_14 = (signed char)0;
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */long long int) -1566327951);
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1 - 2] = ((/* implicit */unsigned long long int) (unsigned char)243);
        var_15 += ((/* implicit */signed char) arr_3 [i_1]);
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((signed char) arr_4 [i_2]));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_17 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) arr_10 [i_2 - 1] [i_2 + 2] [i_2]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7039))))) : (arr_12 [i_2 - 1] [i_2 + 2] [i_2 - 1])))));
                arr_14 [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_10 [i_2 - 1] [i_2] [i_2 - 1]), ((+(arr_10 [(signed char)3] [i_3] [i_4])))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_13 [i_2 + 1] [i_2] [i_2 - 1]) : (arr_13 [i_2 + 2] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (2740985330592547996LL)))));
            }
            var_18 &= ((/* implicit */unsigned long long int) max((max(((+(((/* implicit */int) (unsigned short)15)))), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)219)) * (((/* implicit */int) (unsigned char)241))))) || (((/* implicit */_Bool) arr_9 [(unsigned short)12] [i_3])))))));
            var_19 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) min(((unsigned short)65530), (((/* implicit */unsigned short) (unsigned char)23))))))));
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_9 [i_2 + 1] [i_5 - 2]))))));
                arr_17 [i_2 - 1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 - 3] [i_5] [i_5] [i_5 - 3])))))));
                var_21 = ((/* implicit */signed char) ((int) ((unsigned short) (unsigned char)19)));
            }
            for (long long int i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                var_22 *= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((unsigned int) (unsigned char)0))), (var_4))), (((long long int) ((arr_10 [i_2] [i_2] [i_2]) / (((/* implicit */long long int) arr_18 [i_2] [(unsigned char)14])))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)88)), ((unsigned short)0)))))))));
                arr_20 [i_2 - 1] [i_2 + 2] [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)12))));
            }
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_2] [i_3] [i_3]));
        }
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_24 [i_2] &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_7])))) + (((((/* implicit */_Bool) var_1)) ? (arr_18 [i_2] [(unsigned char)12]) : (4077791752U))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_7 + 1])) ? (((/* implicit */int) ((unsigned short) (unsigned short)50942))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_4 [i_2])))))))))))));
        }
    }
    var_26 = ((/* implicit */signed char) (-(((((unsigned int) (unsigned short)65503)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))))));
    var_27 = ((/* implicit */unsigned short) var_10);
}
