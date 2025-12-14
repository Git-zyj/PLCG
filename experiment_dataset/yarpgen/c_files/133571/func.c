/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133571
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
    var_13 = ((/* implicit */long long int) ((unsigned short) (unsigned short)3623));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -2734943954327267101LL)) ? (2503020731774812751ULL) : (((/* implicit */unsigned long long int) -2734943954327267101LL)))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) / (arr_1 [(unsigned char)8])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_1 [(signed char)10]))));
            var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) (+(22219955)))) : (((arr_0 [i_1]) & (((/* implicit */long long int) 25606129U))))))));
            var_18 = ((/* implicit */unsigned int) (~(-1233670718881130585LL)));
        }
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_19 ^= max((min((((/* implicit */unsigned long long int) (~(var_8)))), (((398061513906684341ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))))), (((/* implicit */unsigned long long int) ((22219958) ^ (((/* implicit */int) (_Bool)0))))));
        var_20 += ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)115)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (6547141889847621377LL) : (((/* implicit */long long int) 885613204U))))) && (((/* implicit */_Bool) (signed char)115)))))));
    }
}
