/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154491
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) ? (13102495517927389027ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((max((arr_1 [5]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)4)) ? (12474870755515880059ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1]))))))))));
        var_20 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)77)))), (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_1 [i_1]))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)100))))))))) ^ ((+(min((arr_1 [1U]), (((/* implicit */unsigned int) arr_7 [(short)10])))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_1] [i_1])), (arr_6 [i_1] [i_1])))) || (((/* implicit */_Bool) min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
        arr_9 [i_1] = max((arr_1 [i_1]), (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2948658671U))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)9)), ((short)-8192)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39982)))))))));
        var_24 = ((long long int) (~(((arr_10 [i_2] [i_2]) << (((-1865058127) + (1865058131)))))));
        arr_12 [(unsigned char)9] = ((/* implicit */unsigned char) (~(min((max((5344248555782162617ULL), (arr_10 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2] [(unsigned short)22])))))))));
        arr_13 [(unsigned short)0] = ((/* implicit */unsigned char) (-(arr_10 [i_2] [i_2])));
        var_25 = ((/* implicit */_Bool) (((+(((/* implicit */int) ((short) arr_11 [i_2]))))) & (((/* implicit */int) arr_2 [i_2] [i_2]))));
    }
    var_26 = ((/* implicit */short) (((-(1481912648U))) == (((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned short)39982)))), (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_15))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_3])), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (13553405191228296685ULL)))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (unsigned short)15156)), (arr_1 [16U]))) + ((~(arr_15 [i_3])))))) != (((arr_10 [i_3] [8U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))));
                arr_19 [(signed char)11] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(arr_17 [i_4]))), (((/* implicit */unsigned long long int) (+(7765968152532721816LL)))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) var_7);
}
