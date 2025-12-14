/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188475
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
    var_16 = ((/* implicit */long long int) ((((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)5))))) & (((((/* implicit */_Bool) 4539628424389459968LL)) ? (-410291506513978957LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63137))))))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) -1252562436)) >= (0ULL))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (signed char)-58))) >> (((((/* implicit */int) (unsigned short)65517)) - (65501)))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) | (2757648359871253521LL)))));
            arr_4 [i_1] &= ((/* implicit */short) ((unsigned short) (!(((_Bool) -1252562436)))));
        }
        var_18 ^= ((/* implicit */short) min(((unsigned short)2422), (((/* implicit */unsigned short) (signed char)115))));
    }
    for (short i_2 = 3; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) (unsigned short)16188))))))));
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) 5763358609518128169ULL))), (min(((unsigned char)25), ((unsigned char)169))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((410291506513978932LL), (((/* implicit */long long int) -1252562436))))) || (((/* implicit */_Bool) 4242222531U)))))) > (2008010226U)));
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_21 -= ((((/* implicit */_Bool) (signed char)-66)) ? ((+(((/* implicit */int) (unsigned short)65530)))) : ((-(((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (signed char)121))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(6228522078658667460ULL))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) ((9437652021835251508ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
    }
    var_24 = var_0;
}
