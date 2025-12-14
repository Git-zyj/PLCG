/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145210
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
    var_19 += var_5;
    var_20 = ((/* implicit */unsigned char) min(((unsigned short)63359), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 3]))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2]))))) : (4294967295U)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_5 - 2] [i_3] [i_3 - 1])))));
                        var_24 |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)241))));
                        arr_13 [i_5] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((((-4259004664061636974LL) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))) + (((((/* implicit */_Bool) 1457622962U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [6ULL] [i_6]))) : (-1LL)))));
                            arr_17 [i_0] [i_3] [(unsigned short)1] [i_5] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [3]) | (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_5 - 1] [(unsigned short)4]))));
                            var_26 = ((/* implicit */int) ((signed char) 1457622944U));
                            var_27 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [3] [(unsigned short)3]))) == (var_7))));
                        }
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1279725237)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) 7325553821951762493ULL))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) arr_10 [i_0] [i_0] [(unsigned char)2]);
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (((_Bool)1) ? (6644485534520115072ULL) : (((/* implicit */unsigned long long int) 1457622964U)))))));
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)5] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (arr_9 [(signed char)4] [(_Bool)1] [2U])));
    }
}
