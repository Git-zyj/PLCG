/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169993
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -690329050)) ? (11009045387208277579ULL) : (((/* implicit */unsigned long long int) 8721344925043738398LL))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [16U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [11ULL] [i_1] [i_2] [i_0]))))))))));
                        var_15 |= ((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_2 [i_1] [(unsigned short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))) : (min((arr_4 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_3 [(short)13] [i_2] [17ULL])))))), (arr_4 [i_0] [i_2])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((arr_10 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0])), (arr_1 [i_0])))) : (((/* implicit */int) arr_8 [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)106)), ((unsigned short)10673))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) % (arr_2 [i_0] [i_0])))) ? (min((min((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_10 [4] [i_0]))), (arr_10 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_5 [i_0] [i_0] [i_0] [(_Bool)1]))))))))));
        arr_13 [i_0] [(short)13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_6 [i_0]), (arr_6 [i_0])))), (((unsigned long long int) 8211761340063481455ULL))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_4]), (arr_16 [i_4])))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_14 [i_4]) : (arr_14 [i_4])))))));
        var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_17 [i_4])))), (((/* implicit */int) max((arr_15 [i_4] [i_4]), (((/* implicit */short) arr_17 [i_4])))))));
    }
}
