/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151258
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [9U] = ((/* implicit */long long int) ((((unsigned int) arr_5 [i_0 - 2] [i_0 - 4])) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_5 [i_0 - 4] [i_0 - 3]))))))));
                        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) var_8)) <= ((-((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_9)))))))))));
                        var_11 = ((/* implicit */_Bool) var_4);
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224))))), (arr_1 [i_3])))) ? (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [5U])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((3436988891U), (751614315U))))))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
        arr_13 [i_0 - 3] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)6]))) - ((+(arr_8 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (arr_4 [6U])))) ? (((/* implicit */unsigned int) var_4)) : (min((((/* implicit */unsigned int) (((_Bool)1) ? (var_4) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0 - 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    }
    for (unsigned int i_4 = 4; i_4 < 14; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_15 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)12)))) ? (3690888809U) : (var_1)))));
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((4201530085U), (((/* implicit */unsigned int) (_Bool)1)))))))));
            var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) ((signed char) var_5)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), ((((~(3436988883U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0U] [i_4 - 3])))))));
            arr_22 [3U] [(_Bool)1] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_4] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) arr_8 [i_4] [i_4 + 1] [i_4]))));
            arr_23 [i_4] [i_4] = ((/* implicit */_Bool) arr_10 [i_4] [i_6]);
        }
        arr_24 [(signed char)2] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_4] [i_4 + 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3436988892U)))))));
    }
    var_19 = ((/* implicit */int) ((unsigned int) ((((_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12363967754725330689ULL))))) : (((/* implicit */int) max((var_9), (var_9)))))));
}
