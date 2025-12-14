/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112078
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((min((((/* implicit */long long int) (unsigned char)73)), (arr_1 [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((11537450741219380054ULL) | (14055135485439450978ULL)))))));
        var_12 ^= ((/* implicit */unsigned long long int) max((((((((/* implicit */long long int) 2879090834U)) < (arr_1 [9ULL] [(short)1]))) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)24776)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-14814))))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1415876462U)) ? (((/* implicit */int) (short)14814)) : (((/* implicit */int) (unsigned short)32905)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24776)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-14796)) ? (1979168974) : (206118583))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (max((min((((/* implicit */int) (short)3968)), (arr_0 [i_0] [i_0]))), (((/* implicit */int) (short)14826)))) : (((((/* implicit */_Bool) 8611536137680240525ULL)) ? (((/* implicit */int) max(((short)-14797), (((/* implicit */short) (signed char)91))))) : (((/* implicit */int) ((((/* implicit */long long int) 2287641797U)) < (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_13 ^= 288089638663356416ULL;
        arr_6 [i_1] = ((/* implicit */signed char) (short)14844);
    }
    var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((8611536137680240530ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1979168974)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)169))))))))));
}
