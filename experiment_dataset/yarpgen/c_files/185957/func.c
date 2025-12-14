/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185957
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
    var_17 = -4785993664418615599LL;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0 - 1] [i_0] [17ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 6600269159822404487ULL))) ? (((unsigned long long int) (unsigned char)54)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_0])) ^ (((/* implicit */int) arr_4 [i_2] [i_0])))))));
                            var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)38)), (((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 2] [(short)2]))))) : (4785993664418615589LL)))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((4U), (503316480U))) << (((arr_0 [i_0]) + (1219656851)))))) && (((/* implicit */_Bool) (+(((long long int) arr_6 [i_0] [i_1] [i_0] [i_1])))))));
                            arr_12 [13ULL] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-104)) ? (1703441711788335598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_3 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_1]))) != (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_1] [i_1])))) ? ((~(((/* implicit */int) arr_7 [i_0])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                var_19 = ((/* implicit */short) ((arr_4 [i_0 + 1] [i_0]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)17] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2] [i_1])) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (9223372036854775789LL) : (arr_2 [i_0] [i_0]))) % (((long long int) arr_7 [i_0])))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */short) ((var_12) && (((/* implicit */_Bool) ((long long int) ((6811314869706251252ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15295)))))))));
}
