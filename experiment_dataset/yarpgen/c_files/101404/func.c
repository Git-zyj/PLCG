/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101404
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 ^= max((((((/* implicit */int) (signed char)122)) & (((/* implicit */int) (short)3855)))), (((/* implicit */int) (_Bool)1)));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((1221853411U), (min((3704659281U), (((/* implicit */unsigned int) (unsigned char)51))))))) ^ (((((min((((/* implicit */long long int) (signed char)-115)), (7541238556607046831LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-1)) + (64)))))));
                arr_6 [i_0] = ((/* implicit */int) ((((2629718001620933404LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-10493))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-123)) <= (((/* implicit */int) (short)-10493))))))));
                arr_7 [i_1] [5ULL] = ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)52162), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) (short)10518)) ? (((/* implicit */int) (short)0)) : (540437583)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8192))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 493449586631326657LL)) ? (2640767935209430221LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (7541238556607046831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */int) -7812730201407597121LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (-493449586631326658LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 ^= ((/* implicit */_Bool) (short)-32752);
        }
    }
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)-26687)) - (-416441430)))), (max((-1LL), (((/* implicit */long long int) (signed char)-118))))))) || (((/* implicit */_Bool) 7541238556607046826LL)))))));
                    var_17 = ((max((((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) >> (((((/* implicit */int) (short)29020)) - (29007)))))), (-7005509553131442815LL))) != (((/* implicit */long long int) ((((((/* implicit */int) (short)-11)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4719426285498157034LL)) ? (max((((((/* implicit */_Bool) (short)12836)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) : (493449586631326648LL))), (((/* implicit */long long int) (_Bool)0)))) : (max((((/* implicit */long long int) max(((unsigned char)72), ((unsigned char)10)))), (max((((/* implicit */long long int) (signed char)-87)), (506354048288652078LL)))))));
                }
            } 
        } 
    } 
}
