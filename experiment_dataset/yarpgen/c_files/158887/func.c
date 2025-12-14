/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158887
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) ((_Bool) (unsigned short)13423))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_9 [(unsigned short)7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)25980)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-101)), ((unsigned short)39568)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [4] [i_0])) : (((/* implicit */int) (unsigned short)39555))))))));
            arr_10 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((((/* implicit */_Bool) var_4)) ? (-113057492) : (((/* implicit */int) (unsigned short)39556)))), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)23467)) : (arr_3 [i_0]))))) : (min((((((/* implicit */int) (unsigned short)25980)) >> (((arr_6 [i_1]) - (1012593787))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-43))))))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 4) 
        {
            arr_14 [i_0 + 1] [i_0 - 2] = ((/* implicit */int) ((unsigned long long int) arr_12 [i_0] [i_2 - 1] [i_2]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                arr_17 [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9796)) | (((/* implicit */int) (_Bool)0))));
                arr_18 [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned short)62887)) ? (1199027782283595923ULL) : (((/* implicit */unsigned long long int) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                arr_19 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2 - 4] [i_3 - 1]))));
                arr_20 [i_3] [(short)18] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)61)) * (((/* implicit */int) (signed char)113))))) % ((+(arr_7 [i_0 + 1] [(unsigned char)2])))));
            }
        }
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3923564656U) ^ (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) << (((((/* implicit */_Bool) 407795259U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))))) : ((+(arr_1 [i_0 + 1])))));
        arr_22 [i_0 + 1] = ((/* implicit */int) (signed char)(-127 - 1));
        arr_23 [i_0] = ((/* implicit */unsigned int) 4733393563240785324ULL);
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15791514)))))))));
}
