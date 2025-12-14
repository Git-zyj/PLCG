/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((0 < 6401524869640091436) / 4294967280);

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((!(((max(4294967295, (arr_1 [7] [i_0]))) > var_3))))));
        var_17 = 0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 = 7354173921026456086;
                    var_19 = (min(var_19, (15 - var_5)));
                    arr_12 [i_1] [i_2] [i_3] = (min((arr_4 [i_3 - 2]), ((60 ? (arr_4 [i_3 + 2]) : (arr_4 [i_3 - 3])))));
                    var_20 = (((((var_11 ? var_13 : 414323682342179780))) ? (arr_0 [i_2]) : ((((1 < (arr_7 [22])))))));
                }
            }
        }
        var_21 -= ((((10914603339233940304 ? (arr_10 [i_1] [i_1] [20]) : (arr_10 [i_1] [i_1] [i_1]))) >= (min(174, 4672154762851086850))));
    }
    #pragma endscop
}
