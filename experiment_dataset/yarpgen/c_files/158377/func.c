/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158377
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1186338899232902299LL)))) ? (((/* implicit */int) arr_1 [i_2])) : ((-(((/* implicit */int) arr_5 [i_2]))))));
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_0])) ? (var_6) : (var_7)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) 11658160242615852152ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (arr_0 [i_0])))))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_7)))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_1] [i_2])) - (8846096471206424121ULL))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_2] [i_1]))) : (((((/* implicit */_Bool) -1485049145)) ? (9600647602503127492ULL) : (0ULL)))))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), (arr_4 [i_2] [i_1] [i_1] [i_0]))))) == (9600647602503127510ULL)))) : (((int) arr_2 [i_1] [i_1] [i_2]))));
                }
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31139))))), (var_11)))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (-(((unsigned long long int) (unsigned short)65533))));
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */short) -1LL);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (unsigned short)34397);
}
