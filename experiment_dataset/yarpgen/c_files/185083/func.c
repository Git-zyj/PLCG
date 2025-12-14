/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185083
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
    var_16 = ((/* implicit */short) (unsigned short)19);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_1]) <= (((/* implicit */long long int) var_9))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32746)) / (((/* implicit */int) (short)-1))));
            arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
        }
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(var_15)));
            arr_12 [i_0] = (-(((/* implicit */int) (unsigned short)16128)));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32728))))) : (18446744073709551608ULL)));
            arr_14 [i_2] [(short)8] [(short)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        }
        arr_15 [(short)10] = ((/* implicit */int) var_2);
        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-32735)) + (((/* implicit */int) (short)-32764))));
        arr_17 [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_5))) || (((/* implicit */_Bool) (-(arr_8 [i_0] [i_0]))))));
    }
    var_17 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) max(((short)32767), ((short)13930))))) > (((((/* implicit */_Bool) (unsigned short)49407)) ? (2199023255551LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))))) ? (((/* implicit */int) min(((short)32744), (((/* implicit */short) ((((/* implicit */int) (short)49)) < (((/* implicit */int) var_13)))))))) : (((/* implicit */int) var_12))));
}
