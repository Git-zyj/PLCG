/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16344
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
    var_19 += ((/* implicit */unsigned long long int) (short)16261);
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((unsigned int) 1477358853443819385LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */short) arr_3 [i_3] [i_3] [i_3]);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 1] [i_1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 - 1] [i_1])))))));
                        }
                    } 
                } 
                arr_10 [i_1] = max((((((/* implicit */_Bool) 2500894679U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))) : (var_7))), (((/* implicit */unsigned int) ((signed char) ((var_15) % (((/* implicit */unsigned long long int) 2500894679U)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1197285001922329288LL)) ? (((((/* implicit */_Bool) ((long long int) arr_5 [(unsigned char)2] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (1794072616U))) : (min((2500894679U), (((/* implicit */unsigned int) (unsigned char)238))))));
                            var_24 += ((/* implicit */unsigned char) (short)18136);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41413))) / (arr_4 [i_1 - 1] [i_1 - 1])))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [8LL] [i_1]))) % (1083700847U))), (((/* implicit */unsigned int) arr_9 [(unsigned char)12] [10ULL] [10ULL] [i_5] [i_5] [i_5])))) : (max((((/* implicit */unsigned int) (signed char)-8)), (3885796985U)))));
                        }
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) (unsigned short)30647)), (-5957012426131122262LL)))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_11 [i_1]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) <= (arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [(unsigned char)0] [i_0]))))))) : ((~((+(((/* implicit */int) (unsigned short)30647))))))));
            }
        } 
    } 
}
