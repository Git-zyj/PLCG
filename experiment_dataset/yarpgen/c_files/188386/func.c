/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188386
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12599))) ^ (var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12573)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)10))))) + (min(((-9223372036854775807LL - 1LL)), (var_2))))))));
                            var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_1 [i_3])))) || (((/* implicit */_Bool) arr_3 [i_2 - 1])))) ? (((/* implicit */int) (unsigned short)12610)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29404)) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52953))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52936))))), ((unsigned short)17779))))) : (((-1LL) % (max((((/* implicit */long long int) 1774779337)), (-17LL)))))));
                        }
                    } 
                } 
                var_13 = (+(max((-3461103469496964492LL), (((/* implicit */long long int) (+(3924449494U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        for (long long int i_5 = 3; i_5 < 19; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_15 [i_4 - 1] [i_4 - 1] [i_5] [i_6 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1774779338)))))) >= (((((((/* implicit */long long int) var_4)) > (-8485006895151542146LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8485006895151542144LL)) ? (arr_10 [i_4]) : (((/* implicit */unsigned int) -184662922))))) : (-8485006895151542130LL)))));
                    var_14 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_5 - 2] [i_5])) ? (-8485006895151542162LL) : (8485006895151542129LL))) % (max((((/* implicit */long long int) 101348937U)), (-4738689359745715913LL))))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47368)))));
                }
            } 
        } 
    } 
}
