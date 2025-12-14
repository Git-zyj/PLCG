/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140387
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) var_5);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) >> (((((/* implicit */int) (unsigned short)54581)) - (54553)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */int) (unsigned char)0)))), (arr_0 [i_0] [i_0])))) - ((~(max((17179865088ULL), (((/* implicit */unsigned long long int) 1291771492))))))));
            arr_5 [(short)10] [(short)10] [i_1] = ((/* implicit */int) (+(max((3ULL), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
            arr_6 [i_1] [(unsigned short)13] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_10)) != ((-(arr_3 [16] [i_1]))))), (min((arr_4 [i_1]), ((!(((/* implicit */_Bool) (unsigned short)10982))))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned short)54554)) | (((/* implicit */int) arr_1 [i_1])))) : (arr_3 [i_1] [i_1])));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) ^ (((((/* implicit */_Bool) (unsigned short)54593)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_14)))))) ? (arr_7 [(short)8] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    arr_17 [i_2] [i_4] = ((((/* implicit */int) min((max(((unsigned short)10982), ((unsigned short)54581))), (((/* implicit */unsigned short) (signed char)38))))) < ((~(((/* implicit */int) var_4)))));
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
        arr_19 [i_2] = ((/* implicit */unsigned char) (~(0LL)));
        var_19 = ((/* implicit */long long int) 4192256ULL);
    }
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_22 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_5]))) * (arr_7 [i_5] [i_5]))), (((/* implicit */unsigned int) arr_4 [i_5]))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_8 [i_5])), (var_14))), (((/* implicit */long long int) (unsigned char)6))))), (((((/* implicit */unsigned long long int) var_14)) | (((arr_21 [5U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5]))))))))))));
        arr_23 [i_5] [i_5] = ((/* implicit */_Bool) var_13);
    }
    var_22 -= ((/* implicit */unsigned int) max((((unsigned long long int) max((((/* implicit */unsigned long long int) var_13)), (var_9)))), (((/* implicit */unsigned long long int) var_8))));
}
