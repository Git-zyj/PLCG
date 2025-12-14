/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129596
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
    var_15 = ((unsigned char) ((unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned short)65535)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -8245937065654937002LL)) : (var_8))))) >> (((((((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) | (((((/* implicit */_Bool) (unsigned short)63675)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))))))) - (7709599567802989399ULL))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (-1) : (((/* implicit */int) (unsigned char)113))))) ? (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)55))))) : (((/* implicit */unsigned long long int) ((var_7) << (((((long long int) var_3)) - (3081746475LL))))))));
        var_17 -= ((/* implicit */unsigned long long int) (((~(min((1330343959), (((/* implicit */int) (unsigned short)42887)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2026073242U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44972))) : (var_3)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) 2026073242U)) || (((/* implicit */_Bool) var_7)))))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            {
                arr_9 [i_1] [i_2] = ((/* implicit */int) max((((unsigned short) min((((/* implicit */unsigned int) var_11)), (var_7)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2147483638)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -1)) : (2610263150152263988LL)))))))));
                var_18 &= ((/* implicit */int) ((((/* implicit */int) ((((var_4) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned char)32))))))))) <= (max((((((/* implicit */_Bool) 630646916U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) 642451594U)))))));
                arr_10 [i_1] [i_1] [0U] = ((/* implicit */_Bool) var_7);
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)42878)))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned char)7))))), (14976970045078146147ULL))));
            }
        } 
    } 
}
