/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_10 = arr_0 [i_1 - 1];
            arr_6 [i_1] = 9223372036854775807;
            var_11 = (max(1614042753, 9162347156877427258));
            arr_7 [2] [i_1] = (((arr_0 [i_1 - 1]) && ((((((-81365721 ? (arr_3 [i_0] [i_1] [i_0]) : 1))) ? (arr_5 [7] [i_1 - 1] [i_1 - 1]) : 9223372036854775807)))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_12 = (((((~(((-9223372036854775796 && (arr_2 [i_2]))))))) ? (((63214 ^ 6506196780667043642) ? 4180045155 : ((((arr_3 [i_0] [8] [i_0]) ? (arr_9 [i_0] [i_0]) : 1))))) : 2044));
            arr_10 [i_0] [i_0] [15] = (((!(((4180045155 ? 12 : 4180045170))))) ? (max((4503599627370495 - 524224), (!4180045163))) : -var_7);
            arr_11 [i_0] [i_0] = 2;
            arr_12 [i_0] [0] [i_0] = (((((arr_8 [i_0]) ? 0 : (arr_4 [i_0] [i_0] [i_0]))) ^ 2));
        }
        var_13 = ((((((arr_1 [i_0]) + 51646))) ? (((((((arr_8 [i_0]) ? var_2 : -4143229011297525241))) ? (arr_2 [i_0]) : (arr_9 [i_0] [i_0])))) : ((-(((arr_5 [17] [i_0] [i_0]) ? 9223372036854775807 : -991669783))))));
        var_14 = ((((((((-9223372036854775796 + 9223372036854775807) << (arr_4 [i_0] [12] [i_0])))) || 2170956203)) ? ((var_5 ? (arr_3 [4] [1] [i_0]) : (arr_0 [1]))) : (arr_1 [i_0])));
    }
    var_15 = var_9;
    #pragma endscop
}
