/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187937
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_6 [(signed char)6] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [5ULL] [i_1 - 1]))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28923))) != (var_2)))), ((+(arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1])))))))))));
            var_10 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((_Bool) arr_2 [i_1 + 1] [i_1]))), (arr_2 [i_1 + 1] [i_1 + 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (min((arr_4 [i_1]), ((unsigned char)33)))))))));
        }
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) + (arr_3 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (min((min((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((/* implicit */unsigned long long int) arr_4 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(7944517721142637228LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2]))))) : ((+(7944517721142637228LL))))))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1955006526233818332LL)) & (14768967082836636198ULL)))) ? (((/* implicit */long long int) 0)) : (7944517721142637228LL)));
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) max((-184548222), (((/* implicit */int) (unsigned char)45))))) != (min((((/* implicit */unsigned long long int) var_7)), (var_8))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))) & (max((var_6), (((/* implicit */unsigned int) var_9)))))))));
        var_14 = ((/* implicit */unsigned char) ((min((min((arr_5 [13]), (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (var_5)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_0 [i_2])))) % ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) var_4);
    }
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((-184548202), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max((1485787631), (-1732944077)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_2)))))));
}
