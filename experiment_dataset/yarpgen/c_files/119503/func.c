/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119503
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 875030577U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [1U] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_2]))) : (875030577U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3] [(unsigned short)2] [2LL] [(unsigned char)15]))) : (3419936718U)));
                                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3419936742U)) ? ((-(875030577U))) : (min((3419936742U), (((/* implicit */unsigned int) var_15))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_16 [i_1] [i_0] [i_5] [i_6]))));
                            arr_20 [i_0] [(unsigned char)2] [i_2] [i_5] [i_6] [i_0] [i_6 + 1] = ((/* implicit */_Bool) ((min((((long long int) 5714363859316934861LL)), (((/* implicit */long long int) (-(arr_4 [i_5] [i_0] [i_0] [i_0])))))) / (((/* implicit */long long int) 875030554U))));
                        }
                        var_19 = ((/* implicit */unsigned char) arr_5 [i_0] [2LL] [i_2] [i_2]);
                    }
                    for (int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        var_20 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) ? ((~(((/* implicit */int) (unsigned short)24576)))) : (((/* implicit */int) min((arr_12 [i_0] [i_1] [18LL] [i_2] [i_2] [i_0] [i_7 - 3]), (((/* implicit */signed char) (_Bool)0)))))))));
                        arr_24 [i_0] [i_1] [i_1] [16ULL] = ((/* implicit */long long int) (((((~(arr_9 [(unsigned short)0] [(unsigned short)0] [i_7]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5610338577922961279LL)))))))) ? (((/* implicit */unsigned long long int) (~(min((var_13), (((/* implicit */long long int) var_10))))))) : (arr_0 [i_2])));
                        var_21 -= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) ^ (arr_0 [i_0])))) || ((!(((/* implicit */_Bool) (unsigned short)0))))))), ((((!((_Bool)1))) ? (min((3419936710U), (3419936751U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_22 += ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_0)) ? (2358186174U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_10)))))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                    }
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) var_16);
}
