/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117408
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3] [(_Bool)1] [i_3])) == (arr_6 [i_0 - 2])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_12 [5LL] [i_1] [(signed char)8] [i_3] [i_1] = ((/* implicit */short) var_5);
                            arr_13 [i_0 - 2] = ((8094053182385651208ULL) >> (((8094053182385651187ULL) - (8094053182385651154ULL))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_11 = ((/* implicit */signed char) arr_4 [i_2 + 1]);
                            arr_18 [i_0] [(_Bool)1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) >= (((((/* implicit */_Bool) 8094053182385651220ULL)) ? (8094053182385651225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11749354308806811254ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_2))))))));
                            arr_19 [i_5] [i_3] [i_2] [i_1] [12] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (8094053182385651235ULL)))));
                        }
                        var_12 = ((signed char) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [i_2 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_34 [i_0] [(_Bool)1] [i_7 - 1] [i_7 - 1] [i_8] [i_9] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) - ((-(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)-18220)))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8])) || (((/* implicit */_Bool) arr_25 [12] [i_8] [i_6] [(unsigned short)16]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((arr_22 [i_0]) % (((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_6] [i_0])) && ((_Bool)1)))) : (((/* implicit */int) max(((short)18202), (((/* implicit */short) arr_28 [i_0] [i_7])))))))));
                    var_15 = ((max((((/* implicit */unsigned long long int) var_8)), (arr_7 [(signed char)17] [i_6] [i_6] [i_7 + 1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0] [i_6] [i_6] [i_6] [i_7] [i_6]), (var_1))))));
                }
            } 
        } 
    }
    var_16 = (+(((/* implicit */int) (!(((_Bool) (unsigned short)1047))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8094053182385651251ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_1)) : ((-(var_5)))));
}
