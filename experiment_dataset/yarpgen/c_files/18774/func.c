/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18774
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
    var_20 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) min((((/* implicit */int) var_15)), (arr_0 [i_0 + 1])));
                arr_8 [i_0] [i_0 + 1] [i_1] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (arr_6 [i_0 + 1])))), (((((/* implicit */_Bool) 1919271902U)) ? (2872834674U) : (((/* implicit */unsigned int) -1325297687))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 4; i_2 < 8; i_2 += 4) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) var_19)))) : (((((/* implicit */int) var_17)) & (((/* implicit */int) (short)18103)))))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_2 - 4])) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 4]))))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) arr_6 [i_2]))))) && (((/* implicit */_Bool) arr_4 [2] [2])))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_2 - 1])))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_2])) & (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 4])) : (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [9U] [i_2] [15U])) : (((((/* implicit */_Bool) arr_6 [i_2 + 4])) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (short)7750))))))))))));
    }
    for (int i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        var_25 = min((var_14), (((/* implicit */unsigned int) ((((arr_2 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) == (((1422132627U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
        var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_3 - 2]) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_10)))) ? ((~(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [(short)14])))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_27 -= ((/* implicit */long long int) arr_3 [i_3] [i_4]);
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3] [i_4])) >> (((((/* implicit */int) arr_14 [i_3 - 1] [i_4])) - (171)))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_3])) + (181590488)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_20 [(_Bool)1] = ((/* implicit */int) (((((!(((/* implicit */_Bool) 4294967274U)))) && (((/* implicit */_Bool) ((short) arr_6 [i_3]))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (var_9))), (min((((/* implicit */long long int) var_19)), (arr_15 [i_3]))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_3] [i_3])), (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_3]))) : (arr_2 [i_5]))))))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_5]))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_3])) == (var_9)))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (arr_6 [i_5])))))) - (arr_18 [i_3] [i_5])));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) var_0);
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
        }
    }
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) << (((((-1) + (24))) - (16)))))), (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) & (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((11333550512340425305ULL) | (((/* implicit */unsigned long long int) var_9)))))) : (var_4)));
}
