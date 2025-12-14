/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177469
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
    var_18 = ((/* implicit */unsigned short) (short)-18285);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1] [1]))) / (14187990346681842502ULL))))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)22323)) || (((/* implicit */_Bool) (unsigned short)65517))))) <= (((/* implicit */int) min((arr_0 [(signed char)1] [i_2]), (((/* implicit */unsigned short) (unsigned char)50))))))))));
                    arr_7 [i_0] [6LL] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) | (arr_4 [i_2] [i_1 + 1] [i_2] [i_2])))))) ? (((/* implicit */int) ((((var_17) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-6127673286536940498LL)))))) : (((/* implicit */int) (unsigned char)28))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    arr_14 [i_3] [i_4] [i_3] = ((/* implicit */short) arr_13 [i_3] [i_4] [i_5] [i_3]);
                    arr_15 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((var_17) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6127673286536940521LL)) ? (((/* implicit */int) var_15)) : ((-2147483647 - 1)))))))));
                    arr_16 [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_5])), (arr_9 [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7] [i_4] [i_7] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */int) arr_12 [i_3]);
                                arr_23 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_18 [i_3] [i_3] [i_3] [i_3]), (arr_18 [i_3] [i_4] [i_6] [i_7])))) ? ((+(arr_8 [i_7]))) : ((~(arr_8 [i_5])))));
                                var_19 = ((/* implicit */unsigned long long int) ((_Bool) 17782154070379116247ULL));
                                var_20 += ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_11 [i_3] [i_3] [i_3])))) & ((~(((/* implicit */int) arr_19 [12ULL] [12ULL] [i_6] [12ULL])))))) / (((((/* implicit */_Bool) max((1155501929), (((/* implicit */int) arr_11 [(unsigned short)20] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (var_8) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_7])))) : (((/* implicit */int) ((short) arr_12 [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
