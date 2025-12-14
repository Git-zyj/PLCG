/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121862
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) var_9)))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) -319291027)) : (arr_1 [i_0 - 1])))));
                var_18 = ((/* implicit */short) ((min((arr_3 [i_0]), (arr_3 [i_0]))) | (max((arr_3 [i_0]), (arr_3 [i_0])))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -84600051)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (min((3987647739096570020LL), (((/* implicit */long long int) var_0))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned char) ((((arr_5 [i_2] [i_2 - 2]) >> (((arr_5 [i_2] [i_2 + 1]) - (8620372161042297929ULL))))) + (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) 2071194607154176244LL))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_2]))));
                var_22 -= ((/* implicit */unsigned short) (+(((((arr_6 [i_2] [i_3] [i_3]) && (((/* implicit */_Bool) 1040384LL)))) ? (15730138706261102372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)-29703))))))))));
                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                arr_20 [9ULL] [9ULL] = (short)(-32767 - 1);
                arr_21 [i_5] = ((((((/* implicit */int) ((unsigned char) (unsigned short)31897))) >= (((/* implicit */int) (unsigned short)0)))) ? (max((((/* implicit */unsigned long long int) arr_18 [i_4] [i_5])), (((((/* implicit */_Bool) arr_9 [i_4] [i_5] [i_4])) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((-1867344605), (((/* implicit */int) (unsigned short)16826))))), (((long long int) 0U))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_28 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((long long int) (-(67100672ULL))));
                            var_23 ^= ((/* implicit */signed char) (+(548366874607137735ULL)));
                            arr_29 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) (unsigned short)33638);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (signed char)94);
}
