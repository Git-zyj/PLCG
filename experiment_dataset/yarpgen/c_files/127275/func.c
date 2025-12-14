/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127275
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_12)), ((unsigned short)41830))), (min((((/* implicit */unsigned short) var_8)), ((unsigned short)65535))))))) == (((((((/* implicit */unsigned int) var_13)) | (0U))) >> (((min((((/* implicit */int) var_7)), (1331700837))) - (19164)))))));
    var_17 = ((/* implicit */int) max((var_17), (((((((/* implicit */int) min((var_4), (var_10)))) * (((/* implicit */int) min((((/* implicit */short) var_10)), (var_9)))))) / (min((((/* implicit */int) min((((/* implicit */short) var_10)), (var_12)))), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65535))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) var_4))))) << (((/* implicit */int) min((var_7), (((/* implicit */short) arr_3 [i_0]))))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (unsigned short)8096))))) * (max((var_15), (arr_1 [14]))))) >> (((min((min((-2147483617), (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((((/* implicit */short) var_4)), (var_12)))))) - (-2147483637))))))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_5 [(unsigned char)11]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_1)) + (31664))))))))), (((((((/* implicit */int) min((var_9), (var_1)))) + (2147483647))) >> (((((arr_4 [i_1]) & (var_0))) - (380624864214538227ULL)))))))) : (((/* implicit */signed char) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_5 [(unsigned char)11]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_1)) + (31664))))))))), (((((((/* implicit */int) min((var_9), (var_1)))) + (2147483647))) >> (((((((arr_4 [i_1]) & (var_0))) - (380624864214538227ULL))) - (18429293569659355160ULL))))))));
        var_20 = ((/* implicit */long long int) min((((min((var_14), (((/* implicit */unsigned long long int) var_7)))) % (((arr_5 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))), (min((((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) min(((unsigned char)139), (((/* implicit */unsigned char) arr_3 [i_1 - 1])))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_3 [i_1])), (var_8)))))) >> (((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (18446744073709551615ULL))), (((((/* implicit */unsigned long long int) 1705136325U)) ^ (0ULL))))) - (1705136287ULL)))));
    }
}
