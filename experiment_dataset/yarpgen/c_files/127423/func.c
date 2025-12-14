/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127423
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
    var_14 = ((/* implicit */signed char) var_5);
    var_15 = ((/* implicit */unsigned short) (unsigned char)231);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 |= ((/* implicit */_Bool) (short)12662);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0] [3LL])))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-12662)), (var_5)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_9)) : (16912085066094531362ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-12663)) / (((/* implicit */int) (unsigned short)25969)))))));
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) (((-(((int) arr_1 [i_0])))) / (((/* implicit */int) ((signed char) arr_1 [i_0])))));
        var_19 *= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)39566)))) * (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (short)32563)))) % (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))))), (max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)251)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) arr_1 [i_1])) : (var_9)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned long long int) var_9);
        var_21 |= ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) arr_10 [i_2]);
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)32581))) * (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) < (((/* implicit */int) arr_10 [i_2])))))));
                    arr_16 [i_2 + 1] [i_2] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)-12662)) % (((/* implicit */int) (short)-12674))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32564))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) * (0ULL)))))));
                    var_24 -= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 1]))))), (((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 2]))))));
                }
                arr_17 [(short)4] [i_3] |= ((/* implicit */unsigned int) ((max(((-(((/* implicit */int) arr_14 [(unsigned char)9])))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)25941)))))) / (((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))));
            }
        } 
    } 
}
