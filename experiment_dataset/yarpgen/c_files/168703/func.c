/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168703
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [1LL] [i_1] = ((/* implicit */unsigned long long int) ((4522814644463913610LL) + (4522814644463913629LL)));
                    arr_10 [9ULL] [9ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) % (999103907931632390ULL)));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) min((max((((/* implicit */long long int) (short)-31332)), (629011268074410140LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-13255), (var_8)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_0)))))))));
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((9109657304564173272LL) / (-1006450212751532396LL))))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min((((min((((/* implicit */unsigned long long int) var_7)), (var_4))) >> (((min((10060066654451072931ULL), (((/* implicit */unsigned long long int) -7155182880524182080LL)))) - (10060066654451072900ULL))))), (((min((13706627721319766387ULL), (((/* implicit */unsigned long long int) 1580140485)))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) | (7155182880524182080LL)))))))))));
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-39)), (var_7)))), (min((((/* implicit */unsigned short) (signed char)-96)), (var_1)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_9)))), (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
}
