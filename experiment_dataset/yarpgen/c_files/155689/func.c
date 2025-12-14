/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155689
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [5LL])) ? (var_11) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) ? (((long long int) arr_0 [i_0] [i_0])) : (((((/* implicit */long long int) var_6)) + (2750231618856180167LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */unsigned char) var_1);
        var_13 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (min((min((((/* implicit */unsigned int) 17)), (2883096704U))), (((/* implicit */unsigned int) (unsigned short)53545))))));
        arr_6 [i_1] = ((/* implicit */short) max((((long long int) ((unsigned int) arr_3 [i_1]))), (((/* implicit */long long int) (unsigned char)144))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((var_7) ? (var_0) : (arr_1 [3ULL] [i_1])))))) && (((arr_1 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14U] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_2]))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((arr_0 [i_2] [i_2]) & (((/* implicit */int) arr_7 [i_2]))))));
        var_17 = (~(2745269186U));
    }
    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_18 = ((unsigned long long int) min(((short)-1), (((/* implicit */short) var_7))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_4))));
        /* LoopSeq 2 */
        for (int i_4 = 4; i_4 < 15; i_4 += 4) 
        {
            arr_15 [(short)6] [i_3] [i_4] = ((/* implicit */long long int) (~(((arr_10 [i_3]) ? ((-(var_3))) : (((/* implicit */int) ((unsigned char) arr_11 [i_4])))))));
            arr_16 [i_3] = ((/* implicit */int) var_9);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_25 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1571640700)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-40))));
                        arr_26 [i_3] [(unsigned short)9] [(short)12] [i_3] [i_3 + 1] [(unsigned short)11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-30388)) ? (-984409207857626352LL) : (((/* implicit */long long int) 4294967293U))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((unsigned int) var_1)) << (((var_8) - (8499015046939793583ULL)))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_8 + 3] [i_5] [(signed char)5])) ? ((-(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_27 [i_3] [i_8] [i_3 + 2])))))))));
                var_22 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)98)) | (((/* implicit */int) var_5)))));
            }
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_3] [6LL] [(short)2] [i_3 - 1])) ? (arr_24 [i_3 + 1] [i_5] [10LL] [i_3] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) var_11);
    var_25 = ((/* implicit */unsigned int) var_2);
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_11) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-1140930717)))))))));
    var_27 = 1932630894U;
}
