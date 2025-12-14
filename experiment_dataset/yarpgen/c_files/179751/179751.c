/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((89309985882186553 ? ((min((arr_3 [6] [4] [i_0 + 1]), (arr_3 [i_0] [i_0] [i_0 - 1])))) : ((89309985882186547 ? ((89309985882186553 ? 91 : 11866207792528988325)) : (!-91)))));
                var_13 = (max(var_13, (((((((-48 & 89309985882186528) * (!3475733491798977738)))) ? (((arr_0 [i_0 - 3]) ? 14971010581910573850 : ((24 ? -221964459 : 1)))) : (((((112 ? (arr_3 [i_1] [9] [i_0]) : 127))))))))));
                var_14 = ((84 ? (((((-63 ? 31278 : 94))) ? 2054508146 : (((0 << (63 - 34)))))) : 62));
                arr_8 [i_0] [5] = 91;
            }
        }
    }
    var_15 = (((((((min(6, 4116443305))) ? -63 : (min(var_6, 0))))) >= ((83 ? 6048 : 13509826560155430722))));
    var_16 ^= var_4;
    var_17 = ((32767 - (~91)));
    #pragma endscop
}
