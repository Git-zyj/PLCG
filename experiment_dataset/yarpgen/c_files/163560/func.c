/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163560
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0] [3U])))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37136)))));
        var_11 = ((/* implicit */unsigned char) var_6);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_1))));
        var_13 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-62)))));
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_2 [(signed char)4]), (((/* implicit */unsigned int) (signed char)-43)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37136)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))) ? (((((((/* implicit */int) (unsigned char)20)) | (arr_1 [i_0] [i_0]))) % (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_1)) : (arr_2 [(signed char)16])))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_3))));
                    var_16 = ((/* implicit */long long int) arr_2 [i_2]);
                    var_17 ^= ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned short)28399)))) * (((((/* implicit */_Bool) arr_3 [(unsigned char)2])) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_3])) : (((/* implicit */int) (_Bool)0)))))) & (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_2] [i_1])) >= (((/* implicit */int) arr_6 [13ULL] [14LL] [14LL])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_18 [i_5] [i_4] [i_7] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */short) ((_Bool) ((signed char) arr_10 [8LL] [i_7 + 2])));
                                arr_19 [i_7 + 2] [i_6] [i_5] [i_5] [16ULL] [i_1] = ((/* implicit */long long int) (-((((_Bool)0) ? (arr_17 [i_1] [i_5] [i_5] [i_6] [i_7 + 2]) : (arr_17 [i_7] [i_5] [i_5] [i_5] [i_1])))));
                                var_18 = ((/* implicit */unsigned char) max((arr_3 [i_7 + 2]), (((/* implicit */unsigned short) ((short) (+(arr_2 [i_5])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((signed char) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) arr_15 [i_1] [(unsigned short)4] [i_5] [i_5])) == (var_1))))));
                }
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1] [i_1]))) : (((/* implicit */int) min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1]))))));
        var_20 -= ((/* implicit */unsigned char) arr_16 [(unsigned short)8] [i_1] [i_1]);
        var_21 ^= ((/* implicit */short) var_9);
    }
    var_22 = ((/* implicit */short) (_Bool)1);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (signed char)122))));
    var_24 = ((/* implicit */short) 7749812732665926751LL);
}
