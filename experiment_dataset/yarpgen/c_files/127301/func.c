/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127301
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [7U]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (arr_1 [i_0])))) ? (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -460388388787337464LL)) : (arr_1 [3ULL]))), (((/* implicit */unsigned long long int) var_2)))) : (min((min((((/* implicit */unsigned long long int) var_2)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3385310459U)) ? (((/* implicit */int) (unsigned short)3945)) : (((/* implicit */int) var_7)))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((_Bool) (~(((arr_6 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_5 [i_1] [i_1]))))));
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) arr_5 [i_1] [i_1]))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_4 [i_1])))) ? (((8191) - (((/* implicit */int) (signed char)43)))) : (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)-44)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_4)))))) ? (arr_9 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)44724), (((/* implicit */unsigned short) (_Bool)1))))))));
        var_12 = ((/* implicit */unsigned int) -1691832492);
        arr_11 [i_2] = ((/* implicit */signed char) var_3);
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_2]))) : (min((((unsigned long long int) (signed char)43)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_2] [(_Bool)1])), (arr_9 [i_2] [i_2]))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(signed char)16] [(signed char)7])) != (((/* implicit */int) ((_Bool) 1691832489)))))), ((+(min((((/* implicit */unsigned int) arr_8 [(unsigned char)8] [i_3])), (4242874364U)))))));
        var_13 = ((/* implicit */unsigned int) (!((_Bool)0)));
        arr_16 [17U] = ((signed char) ((unsigned int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967290U))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned int) arr_9 [13ULL] [13ULL])))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_0))));
}
