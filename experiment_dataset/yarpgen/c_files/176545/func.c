/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176545
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((-3921083661549513035LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))) : (max((((/* implicit */unsigned long long int) (short)0)), (17179852800ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -76136249)) || (((/* implicit */_Bool) (unsigned char)141)))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [11LL])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) max(((unsigned char)0), (arr_0 [i_1])))) << (((((/* implicit */int) ((short) -236972085))) - (6081))))))));
        }
        for (short i_2 = 3; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_2] [i_0]);
            var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55051))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_8 [i_2]))))))), (((/* implicit */int) (unsigned char)9))));
        }
        for (short i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] [i_0] |= ((/* implicit */short) arr_10 [i_0] [i_0]);
            var_24 = ((/* implicit */short) (+(max((((arr_2 [i_0] [i_3 - 2] [i_0]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))))));
            var_25 = ((/* implicit */long long int) var_5);
            var_26 = ((/* implicit */signed char) var_10);
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_8 [(unsigned char)2]))));
    }
    var_28 = ((/* implicit */unsigned int) var_6);
    var_29 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) (unsigned char)115);
                    arr_22 [i_6] [(unsigned short)1] [i_4] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (unsigned short)0)), (0LL))), (((/* implicit */long long int) ((unsigned short) arr_2 [i_6 - 1] [i_6 - 1] [i_6 + 2])))));
                    var_31 = ((((/* implicit */_Bool) 236972077)) ? (7202638277309950517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))));
                    arr_23 [i_4] [i_5] = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
    var_32 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_15)), (var_14)));
}
