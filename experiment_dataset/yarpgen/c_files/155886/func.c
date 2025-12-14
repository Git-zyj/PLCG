/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155886
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_2 [i_0] [i_0 - 1])), ((-2147483647 - 1)))), (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 1]))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 31457280)) ? ((+(1838617417))) : (-717330034))))))));
                arr_5 [(_Bool)1] = arr_1 [i_0];
                arr_6 [i_0] [i_0] [8] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_1] [i_0]));
                var_15 = ((/* implicit */int) max((arr_3 [(_Bool)1] [(signed char)5]), (var_12)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_2 [i_2] [i_2])), (var_11))) < (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [23U] [i_3]), (var_9))))))))) : (((((/* implicit */_Bool) -58230275)) ? (arr_19 [i_2]) : (arr_19 [i_2]))));
                                arr_22 [i_2] [i_3] [i_3] [i_2] [11] = ((/* implicit */int) ((((3863182901U) + (((/* implicit */unsigned int) 717330021)))) << (((4202274261U) - (4202274234U)))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (-((+(var_1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        arr_27 [i_7] [6] = ((/* implicit */signed char) 0);
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((min((arr_4 [i_8 + 3] [i_8 - 1]), (((/* implicit */long long int) arr_24 [i_7 + 1] [i_7 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38503)) ? (((/* implicit */unsigned int) -684636320)) : (133693440U))))));
                    var_18 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_25 [i_7] [i_9])) ? (arr_3 [i_7 - 1] [i_8]) : (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((133693440U) << (((-306341228) + (306341252)))))))), (((/* implicit */long long int) ((227146157) <= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4161273855U))))))))));
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_42 [i_10] [i_10] [i_12] = ((/* implicit */_Bool) ((signed char) min((-341351945), (((/* implicit */int) ((unsigned short) arr_29 [i_10] [i_12]))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -145806974))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) var_9);
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 4161273855U))));
        var_22 = ((/* implicit */unsigned short) (((~(arr_24 [i_10] [i_10]))) | (arr_24 [i_10] [i_10])));
        arr_43 [i_10] = ((/* implicit */long long int) ((unsigned short) max((((long long int) var_8)), (((/* implicit */long long int) (~(var_6)))))));
    }
    for (int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (((-2147483647 - 1)) - ((-(1925106168)))));
        var_24 = ((/* implicit */long long int) var_10);
        var_25 = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */_Bool) arr_24 [i_13] [i_13])) ? (var_6) : (arr_20 [i_13] [i_13] [1LL] [i_13] [1LL])))));
        var_26 |= ((/* implicit */_Bool) var_4);
    }
    var_27 += (-(var_7));
}
