/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169106
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) / (((13617140731795773102ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1913))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? ((~(10880637175862943028ULL))) : (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))))))) > (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) (signed char)-30)))) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (37883)))));
        arr_2 [i_0] = ((int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_16)))))) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-5485377931353933165LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [(_Bool)1]);
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (arr_7 [i_2 - 2]) : (var_1)));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) var_3);
            arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3]))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9309)) + (((/* implicit */int) var_15)))))));
            var_22 = ((/* implicit */int) arr_1 [7] [7]);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)110)))))));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [3] [i_1])) ? (((/* implicit */int) min((arr_1 [i_1] [4]), (arr_1 [i_1] [i_1])))) : (((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((((/* implicit */int) arr_1 [i_1] [i_1])) - (37890)))))));
        var_25 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (_Bool)0))))), (max((var_4), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_1])), (min((-1820244436), (arr_0 [i_1]))))))));
        var_26 = min(((-(arr_7 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)119))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] = ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_13)) - (11121))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */long long int) var_8)) : (var_5)))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) - (122177265955291230ULL))))))));
                }
            } 
        } 
    }
}
