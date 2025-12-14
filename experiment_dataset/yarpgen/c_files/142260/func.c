/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142260
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((_Bool) (short)-1));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))) ? (((/* implicit */int) arr_7 [14U] [14U] [i_2 + 2] [i_2 + 2])) : (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) % (((/* implicit */int) arr_9 [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 4] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_21 += ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)197), (((/* implicit */unsigned char) (!(arr_11 [i_0] [i_1] [i_2 - 1] [i_2] [i_0])))))))) != (((-6114019106141558302LL) ^ (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)17981))))))));
                    }
                    for (long long int i_4 = 4; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_4 - 2] [i_0 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [0U] [i_2 + 3] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3281))) : (arr_13 [i_0] [i_1] [i_2 + 1]))))));
                        var_22 += ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) max(((signed char)7), (((/* implicit */signed char) (_Bool)1)))))))) <= (max((((/* implicit */unsigned int) var_0)), ((+(67108863U)))))));
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_1] = var_12;
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -6114019106141558305LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (67108863U))), (((/* implicit */unsigned int) (~(1272201689)))))))));
                }
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5] [i_5] [i_5 - 1]))))) ? (((/* implicit */int) min((max(((unsigned char)18), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) ((arr_2 [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) (unsigned char)53))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (((-(((int) 18446744073709551603ULL)))) << ((((((+((-(((/* implicit */int) arr_18 [i_5] [(short)11])))))) + (7566))) - (29)))));
    }
    /* LoopSeq 2 */
    for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((short)-19347), (((/* implicit */short) arr_9 [i_6]))))), ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((6114019106141558302LL), (((/* implicit */long long int) arr_0 [i_6] [i_6]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-9274))) - (6114019106141558302LL)))));
        arr_26 [i_6 - 1] = ((/* implicit */_Bool) ((min((((/* implicit */int) ((short) var_4))), (var_18))) ^ (((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 1]))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7]))));
        var_25 += ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_29 [i_7]));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
    {
        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
        {
            {
                arr_35 [i_8] [i_8] = ((/* implicit */short) arr_6 [i_8 - 2] [i_9] [i_9]);
                arr_36 [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) 4739232620008491635ULL))));
            }
        } 
    } 
}
